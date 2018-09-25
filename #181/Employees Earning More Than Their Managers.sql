# Write your MySQL query statement below
select Name as Employee from Employee a where a.salary>(select b.salary from Employee b where b.Id=a.ManagerId)