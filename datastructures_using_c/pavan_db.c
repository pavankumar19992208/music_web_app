#importing module
import sqlite3
#connecting database
conn = sqlite3.connect('pavan.db')
#creating cursor
c=conn.cursor()
#creating table
#c.execute('''CREATE TABLE items(name,cost,quantity,variant)''')
#giving values
c.execute('''INSERT INTO items VALUES('pen','5','35','g-841'),('pencil','3','40','g-941')''')
#reading data
re = conn.execute('''SELECT * FROM items''')
for data in re:
    print(data)
#deleting data
conn.execute('''DELETE FROM items WHERE name="pencil"''')
conn.commit()
re = conn.execute('''SELECT * FROM items''')
for data in re:
    print(data)
#closing connection
conn.close


