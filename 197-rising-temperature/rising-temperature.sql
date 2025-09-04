# Write your MySQL query statement below

select W1.id from Weather AS W1
JOIN
Weather AS W2 on DATEDIFF(W1.recordDate, W2.recordDate) = 1
where W1.temperature > W2.temperature


-- select W1.id from Weather AS W1
-- JOIN
-- Weather AS W2 on DATEDIFF(W1.recordDate, W2.recordDate) = 1
-- where W2.temperature > W1.temperature
-- For checking previos ones