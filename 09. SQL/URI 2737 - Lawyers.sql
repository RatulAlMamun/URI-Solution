SELECT name, customers_number
FROM lawyers
WHERE customers_number = (
        SELECT Max(customers_number) FROM lawyers
    )
UNION ALL
    SELECT name, customers_number
    FROM lawyers
        WHERE customers_number = (
            SELECT Min(customers_number)
            FROM   lawyers
        )
UNION ALL 
    SELECT 'Average' AS name, Round(Avg(customers_number), 0) AS customers_number
    FROM lawyers;