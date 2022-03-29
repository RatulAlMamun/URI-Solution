SELECT d.name,
	SUM(
	ROUND(
      (a.hours * 150) + 
      (
        (a.hours * 150) *  
        (w.bonus / 100.0)
       ),
    1)) AS salary
FROM doctors AS d
INNER JOIN attendances AS a
ON d.id = a.id_doctor
INNER JOIN work_shifts AS w
ON w.id = a.id_work_shift
GROUP BY d.name
ORDER BY salary DESC;