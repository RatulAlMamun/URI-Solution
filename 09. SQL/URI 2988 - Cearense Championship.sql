SELECT 
  name, 
  COUNT(teams.id) as matches, 
  COUNT(
    CASE WHEN (
      teams.id = matches.team_1 
      AND matches.team_1_goals > matches.team_2_goals
    ) 
    OR (
      teams.id = matches.team_2 
      AND matches.team_1_goals < matches.team_2_goals
    ) THEN 1 ELSE null END
  ) as victories, 
  COUNT(
    CASE WHEN (
      teams.id = matches.team_1 
      AND matches.team_1_goals < matches.team_2_goals
    ) 
    OR (
      teams.id = matches.team_2 
      AND matches.team_1_goals > matches.team_2_goals
    ) THEN 1 ELSE null END
  ) as defeats, 
  COUNT(
    CASE WHEN (
      teams.id = matches.team_1 
      AND matches.team_1_goals = matches.team_2_goals
    ) 
    OR (
      teams.id = matches.team_2 
      AND matches.team_1_goals = matches.team_2_goals
    ) THEN 1 ELSE null END
  ) as draws, 
  SUM(
    CASE WHEN (
      teams.id = matches.team_1 
      AND matches.team_1_goals > matches.team_2_goals
    ) 
    OR (
      teams.id = matches.team_2 
      AND matches.team_1_goals < matches.team_2_goals
    ) THEN 3 ELSE 0 END
  ) + SUM(
    CASE WHEN (
      teams.id = matches.team_1 
      AND matches.team_1_goals = matches.team_2_goals
    ) 
    OR (
      teams.id = matches.team_2 
      AND matches.team_1_goals = matches.team_2_goals
    ) THEN 1 ELSE 0 END
  ) as score 
FROM 
  teams 
  INNER JOIN matches ON matches.team_1 = teams.id 
  OR matches.team_2 = teams.id 
GROUP BY teams.id
ORDER BY score DESC, teams.name;
