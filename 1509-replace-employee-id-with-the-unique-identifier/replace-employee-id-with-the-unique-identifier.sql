SELECT unique_id,name FROM Employees e LEFT JOIN EmployeeUNI d
ON e.id = d.id
