# Write your MySQL query statement below

select c.contest_id,
ROUND( count(c.user_id) * 100 
/ (Select count(*) from users)
, 2 ) as percentage
from  register c
group by c.contest_id
order by percentage desc, c.contest_id;