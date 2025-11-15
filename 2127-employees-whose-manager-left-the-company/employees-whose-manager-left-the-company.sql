# Write your MySQL query statement below
select e.employee_id 
from Employees e
where e.salary < 30000 AND e.manager_id NOT IN (
        SELECT e1.employee_id
        FROM Employees e1
)
ORDER BY employee_id;