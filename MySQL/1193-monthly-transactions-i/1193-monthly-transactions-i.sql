# Write your MySQL query statement below

select DATE_FORMAT(trans_date, '%Y-%m')  as month,
country, 
count(*) as trans_count ,
SUM( IF(state IN ('approved'), 1, 0) ) as approved_count ,
sum(amount) as trans_total_amount  ,
sum( IF(state IN ('approved'), amount, 0)) as approved_total_amount
from Transactions 
group by Year(trans_date), Month(trans_date), country;
