SELECT
	name,
    LENGTH(name) as length
FROM people
ORDER by length DESC;