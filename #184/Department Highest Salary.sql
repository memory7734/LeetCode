# Write your MySQL query statement below
select b.name as Department, a.Employee, a.salary as Salary
from
(select name as Employee, DepartmentId, salary, rank() over (partition by DepartmentId order by salary desc) as ord
from employee
) as a

left join Department b
on a.departmentid = b.id

where a.ord = 1
order by a.salary desc