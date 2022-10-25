import java.sql.*;  

class MysqlCon 
{  
public static void main(String args[])
{  
	try
	{  
		Class.forName("com.mysql.jdbc.Driver");  
		Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/sonoo","root1","Root@123"); 
		
		Statement stmt=con.createStatement();  
		ResultSet rs=stmt.executeQuery("select * from emp");  
		
		while(rs.next())  
			System.out.println(
							  rs.getInt(1)+"  "
							+rs.getString(2) + " " 
							+ rs.getInt(3)
						     );  
		con.close();  
	}
	catch(Exception e)
	{ 
		System.out.println(e);
	}  
}  
}  
