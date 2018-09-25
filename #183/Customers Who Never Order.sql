# Write your MySQL query statement below
select name as Customers from Customers where Customers.Id not in (select CustomerId from orders where CustomerId is not NULL)