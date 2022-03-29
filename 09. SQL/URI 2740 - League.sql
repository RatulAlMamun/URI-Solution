(
  SELECT 
    CONCAT('Podium: ', team) AS name 
  FROM 
    league 
  ORDER BY 
    position 
  LIMIT 
    3
) 
UNION ALL 
  (
    SELECT 
      CONCAT('Demoted: ', team) AS name 
    FROM 
      league 
    WHERE 
      position > any(
        SELECT 
          COUNT(*)-2 
        FROM 
          league
      )
  )
