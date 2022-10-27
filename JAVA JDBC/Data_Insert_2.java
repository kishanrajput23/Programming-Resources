import java.sql.*;  

class Data_Insert_2
{  
	public static void main(String args[])
	{  
		int id = Integer.parseInt(args[0]);
		String name = args[1];
		int age = Integer.parseInt(args[2]);
		
		try
		{  
		Class.forName("com.mysql.jdbc.Driver");  
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/sonoo","root1","Root@123"); 
		
String str ="INSERT INTO emp(id,name,age) VALUES(" + id + ",'" + name + "'," + age +")";
		PreparedStatement sql = con.prepareStatement(str);
		sql.executeUpdate();
		System.out.println("inserted");				
		
		
		con.close();  
		}
		catch(Exception e)
		{ 
			System.out.println(e);
		}  
	}  
}  
