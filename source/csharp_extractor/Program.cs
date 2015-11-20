// use this as program.cs file in monodevelop.
// file will be generated at <project_folder>/<project_name>/<project_name>/bin/release/test.txt 


using System;
using System.Reflection;
using Newtonsoft.Json;
using System.Collections.Generic;

public struct method_list12
{
	public string method_name ;
	public string return_type;
	//public System.Reflection.ParameterInfo [] parameters;
	public string [] parameters;
	public string class_name;
};

namespace assembly
{


	class MainClass
	{
		public static void Main (string[] args)
		{
			Assembly mscorlib = Assembly.LoadFrom("/usr/lib/mono/4.5/System.dll");
			foreach (Type type in mscorlib.GetTypes())
			{
				foreach (MethodInfo method in type.GetMethods()) 
				{
					method_list12 a = new method_list12();
					a.method_name = method.Name;
					a.return_type = method.ReturnType.ToString();
					a.class_name = type.FullName;
					var json = JsonConvert.SerializeObject (a);
					Console.WriteLine (json);
					System.IO.File.AppendAllText ("test.txt" ,json);
				}
			}
		}
	}
}
