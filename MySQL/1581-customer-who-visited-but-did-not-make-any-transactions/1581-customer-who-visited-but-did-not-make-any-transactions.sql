# Write your MySQL query statement below
#subquery use, but for every entry in visits, whole transactions table will be iterated
-- Select customer_id, Count(customer_id) as count_no_trans
-- from Visits as vs
-- Where vs.visit_id Not in (
--     Select visit_id from Transactions
-- )
-- Group by customer_id
-- ;

#join

Select v.customer_id, Count(v.customer_id) as count_no_trans
from Visits as v
left join Transactions t
     ON v.visit_id = t.visit_id
where t.visit_id is null
group by v.customer_id;