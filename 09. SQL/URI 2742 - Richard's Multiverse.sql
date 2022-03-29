SELECT
	lr.name,
    ROUND((lr.omega * 1.618), 3) AS "The N Factor"
FROM dimensions AS d
INNER JOIN life_registry AS lr
ON d.id = lr.dimensions_id
WHERE 
	d.name IN ('C875', 'C774')
    AND lr.name LIKE '%Richard%';