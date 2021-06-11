# Write your MySQL query statement below
SELECT * from Cinema where (Cinema.id % 2 <> 0 ) AND (Cinema.description <> 'boring') ORDER BY rating DESC
