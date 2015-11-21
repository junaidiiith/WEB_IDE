package reflection;
import java.util.ArrayList;

import java.util.List;

import org.json.simple.JSONObject;
import java.io.IOException;
import java.util.Enumeration;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;

import org.apache.bcel.classfile.ClassParser;
import org.apache.bcel.classfile.Field;
import org.apache.bcel.classfile.JavaClass;
import org.apache.bcel.classfile.Method;

public final class Reflect
{
	public static void main(String[] args)
	{	
		
		
		JarFile jar = null;
		try
		{
			String jarName = "/usr/lib/jvm/java-7-openjdk-amd64/jre/lib/rt.jar";
			jar = new JarFile(jarName);
			Enumeration<JarEntry> entries = jar.entries();
			
			while (entries.hasMoreElements())
			{	
				JSONObject obj = new JSONObject();
				List<Field> fs = new ArrayList<Field>();
			//	List<Method> ms = new ArrayList<Method>();
				JarEntry entry = entries.nextElement();
				if (!entry.getName().endsWith(".class"))	
				{
					continue;
				}
				
				ClassParser parser =
				new ClassParser(jarName, entry.getName());
				JavaClass javaClass = parser.parse();
				obj.put("Class Name", javaClass.getClassName());
				//System.out.println("Class: "+javaClass.getClassName());
				//System.out.println(" Fields:");
				for (Field field : javaClass.getFields())
				{
			//		System.out.println(" "+field);
					
					fs.add(field);
				}
				obj.put("Fields", fs);
//				System.out.println(obj);
			//	System.out.println(" Methods:");
				for (Method method : javaClass.getMethods())
				{	
					JSONObject obj1 = new JSONObject();
					obj1.put("Class Name", javaClass.getClassName());
			//		System.out.println(" "+method);
					obj1.put("Method name",method.getName());
					//obj1.put("Somet other field",method.getSignature());
					obj1.put("Return type",method.getReturnType().toString());
					int tmp = method.getArgumentTypes().length;
				//	System.out.println("Number of argument=" + tmp);
					List <String> ArgumentTypes = new ArrayList<String>();
					for(int j=0;j<tmp;j++)
						ArgumentTypes.add(method.getArgumentTypes()[j].toString());
					//System.out.println();
					obj1.put("Arguments_types", ArgumentTypes);
					System.out.println(obj1);
				}
				
				System.out.println();
				System.out.println();
			}
		}
		catch (IOException e)
		{
			e.printStackTrace();
		}
		finally
		{
			if (jar != null)
			{
				try
				{
					jar.close();
				}
				catch (IOException e)
				{
					e.printStackTrace();
				}
			}
		}
	}
}