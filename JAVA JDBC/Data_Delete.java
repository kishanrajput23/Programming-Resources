import java.sql.*;  

class Data_Delete
{  
	public static void main(String args[])
	{  
		//String name = args[0];	
		int id = Integer.parseInt(args[0]);
		try
		{  
		Class.forName("com.mysql.jdbc.Driver");  
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/sonoo","root1","Root@123"); 
		
		String str ="DELETE FROM emp WHERE id = ?";
		//String str ="DELETE FROM emp WHERE name = ?";

		PreparedStatement sql = con.prepareStatement(str);
		sql.setInt(1,id);		
		//sql.setString(1,name);
		sql.executeUpdate();
		System.out.println("Data Deleted");				
		con.close();  
		}
		catch(Exception e)
		{ 
			System.out.println(e);
		}  
	}  
}  
