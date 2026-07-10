# Write your MySQL query statement below

Select uni.unique_id, emp.name 
from Employees As emp
Left Join EmployeeUNI as uni
    ON emp.id = uni.id
;