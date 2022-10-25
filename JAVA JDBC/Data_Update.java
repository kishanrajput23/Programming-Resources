import java.sql.*;  

class Data_Update
{  
	public static void main(String args[])
	{  
		int id = Integer.parseInt(args[0]);
		int age = Integer.parseInt(args[1]);
		try
		{  
		Class.forName("com.mysql.jdbc.Driver");  
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/sonoo","root1","Root@123"); 
		
		String str ="update emp set age = ? where id = ?";
		

		PreparedStatement sql = con.prepareStatement(str);
		sql.setInt(1,age);		
		sql.setInt(2,id);
		sql.executeUpdate();
		System.out.println("Data updated");				
		con.close();  
		}
		catch(Exception e)
		{ 
			System.out.println(e);
		}  
	}  
}  
