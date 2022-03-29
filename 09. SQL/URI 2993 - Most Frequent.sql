SELECT 
	temp.amount AS most_frequent_value
FROM (
  	SELECT 
  		amount,
  		COUNT(amount) AS c
 	FROM value_table
	GROUP BY amount
	ORDER BY c DESC
	LIMIT 1
) as temp;