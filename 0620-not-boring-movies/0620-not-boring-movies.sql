# Write your MySQL query statement below
SELECT * 
FROM Cinema
where id%2 != 0 AND description != "boring" Order BY rating desc;