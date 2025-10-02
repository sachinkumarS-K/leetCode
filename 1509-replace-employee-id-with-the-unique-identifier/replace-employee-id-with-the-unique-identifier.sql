# Write your MySQL query statement below
select unique_id , name
from Employees  as emp
left join EmployeeUNI as empUni
on emp.id = empUni.id;