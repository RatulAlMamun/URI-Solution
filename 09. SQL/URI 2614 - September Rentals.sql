select customers.name, rentals.rentals_date from customers 
inner join rentals on customers.id=rentals.id_customers
where rentals.rentals_date>='2016-09-01' and rentals.rentals_date<='2016-09-30';