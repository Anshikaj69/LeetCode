# Write your MySQL query statement below


select p.product_id,
COALESCE(ROUND(SUM(p.price * us.units) / SUM(us.units),2), 0) as average_price
from prices p
left join UnitsSold us
    on p.product_id = us.product_id and p.start_date <= us.purchase_date and us.purchase_date <= p.end_date
group by p.product_id;