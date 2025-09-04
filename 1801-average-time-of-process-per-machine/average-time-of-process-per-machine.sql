SELECT 
    s.machine_id,
    Round(avg(e.timestamp - s.timestamp),3) as processing_time 
FROM Activity s
JOIN Activity e
  ON s.machine_id = e.machine_id
 AND s.process_id = e.process_id
Where s.activity_type='start' and e.activity_type='end'
group by s.machine_id