# Write your MySQL query statement below

Select customer_id, Count(customer_id) as count_no_trans
from Visits as vs
Where vs.visit_id Not in (
    Select visit_id from Transactions
)
Group by customer_id
;