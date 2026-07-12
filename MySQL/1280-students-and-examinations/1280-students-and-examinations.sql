# Write your MySQL query statement below

SELECT s.student_id, s.student_name, sub.subject_name, count(e.subject_name) as attended_exams
FROM students s
CROSS JOIN subjects sub
    LEFT JOIN examinations e
      ON s.student_id = e.student_id and sub.subject_name = e.subject_name
group by s.student_id, sub.subject_name
order by s.student_id, sub.subject_name;
