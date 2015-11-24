var lang="";
var libc="";
var len = 0;
var editor = ace.edit("editor");
editor.setTheme("ace/theme/monokai");
var snippetManager = ace.require("ace/snippets").snippetManager;
chagLang = function ()
{
  temp = document.getElementById("languages");
  lang = temp.options[temp.selectedIndex].value;
  //console.log(lang);
  var langpath = "ace/mode/";
  editor.getSession().setMode(langpath.concat(lang));
}

chagTheme = function ()
{
  get_theme = document.getElementById("themes");
  theme = get_theme.options[get_theme.selectedIndex].value;
  //console.log(theme);
  var theme_path = "ace/theme/";
  editor.setTheme(theme_path.concat(theme));
}



var functionExtractor = {
  getCompletions: function(editor, session, pos, prefix, callback) 
  {
    $(function ()
    {
      var iurl = "data/";
      iurl = iurl.concat(lang);
      iurl = iurl.concat("/");
      if (lang=="c_cpp") 
      {
        iurl = iurl.concat(libc);
        console.log(iurl);
      }
      $.ajax({
        datatype: "json",
        type:'GET',
        url: iurl,
        success: function(data)
        {
          cstring = jQuery.parseJSON(data);
          callback(null, cstring.map(function(fn)
          {
            /*if(fn.fields.method_name.indexOf(prefix)>-1)
            {
              console.log("Script ran successfully");
            }*/
            return {name: fn.fields.method_name, value: fn.fields.method_name, score:0, meta: "functions"}; 
          }));
        }
      }); 
    });
    }
  }
window.setInterval(function()
{
  if(lang=="c_cpp")
  {
    var code = editor.getValue();
    var temp = code.match(/#include[ ]*<[a-z.]+>/g);
    if(temp.length > len)
    {
      for(var i = len; i< temp.length ;i++)
      {
        var foo = temp[i].match(/[a-z]+.h/g);
        console.log(foo[0]);  
        libc = libc.concat(foo[0]).concat(",");
      }
      len = temp.length;
    }
    else if(temp.length < len)
    {
      len = temp.length;
    }
    console.log(libc);
  }
}, 1000);