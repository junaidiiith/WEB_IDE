var langTools = ace.require("ace/ext/language_tools");
langTools.addCompleter(functionExtractor);
editor.setOptions
({
  enableBasicAutocompletion: true,
  enableLiveAutocompletion: true,
  enableSnippets: true,
});