# Write your MySQL query statement below


Select currDay.id
from weather currDay
join weather prevDay
    on currDay.recordDate = DATE_ADD(prevDay.recordDate, Interval 1 Day)
where currDay.temperature > prevDay.temperature
order by currDay.recordDate, prevDay.recordDate;

