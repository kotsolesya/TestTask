SELECT * FROM `users` 
WHERE (
    (
    YEAR( CURRENT_DATE ) - YEAR( birthday )
    ) - ( DATE_FORMAT( CURRENT_DATE, '%m%d' ) < DATE_FORMAT( birthday, '%m%d' ) )
) >18