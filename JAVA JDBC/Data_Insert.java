import java.sql.*;  

class Data_Insert 
{  
	public static void main(String args[])
	{  
		
		try
		{  
		Class.forName("com.mysql.jdbc.Driver");  
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/sonoo","root1","Root@123"); 
		
		String str ="INSERT INTO emp(id,name,age) VALUES(12,'naresh',58)";
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
