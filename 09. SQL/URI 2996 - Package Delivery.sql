SELECT year, sender.name as sender, receiver.name as receiver
FROM packages
LEFT JOIN users as sender ON id_user_sender = sender.id
LEFT JOIN users as receiver ON id_user_receiver = receiver.id
WHERE
	(color = 'blue' OR year > 2014)
    AND sender.address <> 'Taiwan' 
    AND receiver.address <> 'Taiwan' 
ORDER BY year DESC, id_package DESC;