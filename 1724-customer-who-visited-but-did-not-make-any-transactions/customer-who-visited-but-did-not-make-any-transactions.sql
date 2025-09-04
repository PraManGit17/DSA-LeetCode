# Write your MySQL query statement below

select customer_id, count(customer_id) as count_no_trans  from Visits
left outer join
Transactions on Visits.visit_id = Transactions.visit_id 
where transaction_id IS NULL
GROUP BY customer_id
Order By count_no_trans asc