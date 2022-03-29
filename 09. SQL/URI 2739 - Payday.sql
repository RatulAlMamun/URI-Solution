SELECT 
	name,
    CAST (EXTRACT(day from payday) AS INTEGER) as day
FROM loan;