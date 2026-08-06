# Write your MySQL query statement below

select query_name, 
ROUND( AVG( rating/position ) , 2) As quality ,
ROUND( AVG( IF(rating<3, 100, 0) ),2 ) As poor_query_percentage 
FROM Queries
Group by query_name
Order by quality,poor_query_percentage DESC;