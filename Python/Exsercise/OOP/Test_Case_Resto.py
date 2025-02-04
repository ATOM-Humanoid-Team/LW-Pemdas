from typing import List

class Menu:
    _id_counter = 0

    def __init__(self, name, price):
        self.id = Menu._id_counter
        Menu._id_counter += 1
        self.name = name
        self.price = price

class Table:
    def __init__(self, number):
        self.number = number
        self.customer = None
        self.orders = []

    def show_orders(self) -> List[Menu]:
        return self.orders

class Restaurant:
    def __init__(self, name, table_count):
        self.name = name
        self.tables = [Table(i) for i in range(1, table_count + 1)]
        self.menu = [
            Menu('Nasi Goreng', 15000),
            Menu('Mi Goreng', 15000),
            Menu('Capcay', 20000),
            Menu('Bihun Goreng', 17000),
            Menu('Ayam Koloke', 25000)
        ]

    def show_tables(self):
        for table in self.tables:
            status = 'kosong' if table.customer is None else f'terisi oleh pelanggan {table.customer}'
            print(f'Meja {table.number}: {status}')

    def show_menu(self):
        print("Daftar Menu:")
        for menu in self.menu:
            print(f"{menu.id + 1}. {menu.name} - Rp{menu.price}")

    def add_customer(self, table_number, customer):
        if not (table_number - 1) in range(len(self.tables)):
            print(f"Nomor Meja Out Of Range")
            return
        table = self.tables[table_number - 1]
        if table.customer is not None:
            print(f"Meja {table.number} sudah terisi oleh {table.customer}")
        else:
            table.customer = customer
            print(f"Customer {customer} telah ditambahkan ke meja {table.number}")

    def add_order(self, table_number, menu_id):
        if not (table_number - 1) in range(len(self.tables)):
            print("Nomor Meja Out Of Range")
            return
        if not (menu_id - 1) in range(len(self.menu)):
            print("ID Menu Out Of Range")
            return
        table = self.tables[table_number - 1]
        if table.customer == None:
            print(f"Meja Belum Terisi")
            return
        table.orders.append(menu_id - 1)
        print(f"Pesanan {self.menu[menu_id-1].name} telah ditambahkan ke meja {table.number}")

    def remove_customer(self, table_number):
        if not (table_number - 1) in range(len(self.tables)):
            print(f"Nomor Meja Out Of Range")
            return
        table = self.tables[table_number - 1]
        if table.customer == None:
            print(f"Meja Belum Terisi")
            return
        table.customer = None
        table.orders = []
        print(f"Customer dari meja {table.number} telah dihapus")
    
    def show_order(self, table_number):
        if not (table_number - 1) in range(len(self.tables)):
            print(f"Nomor Meja Out Of Range")
            return
        table = self.tables[table_number - 1]
        if table.customer == None:
            print(f"Meja Belum Terisi")
            return
        orders = table.show_orders()
        for order_id in orders:
            print(f"Meja {table.number} - {table.customer} Memesan {self.menu[order_id].name} - Rp{self.menu[order_id].price}")

    def bill(self, table_number):
        if not (table_number - 1) in range(len(self.tables)):
            print(f"Nomor Meja Out Of Range")
            return
        table = self.tables[table_number - 1]
        orders = table.show_orders()
        print(f"Pesanan di meja {table_number}:")
        for order_id in orders:
            print(f"{self.menu[order_id].name} - Rp{self.menu[order_id].price}")
        total = self.calculate_bill(table_number)
        print(f"Total: Rp{total}")

    def calculate_bill(self, table_number):
        table = self.tables[table_number - 1]
        total = sum(self.menu[order_id].price for order_id in table.orders)
        return total

def main():
    restaurant = Restaurant('Bu Rudy', 10)
    selector = -1
    while selector != 0:
        print("Selamat datang di Restoran Bu Rudy")
        print("1. Tampilkan daftar meja")
        print("2. Tambah pelanggan")
        print("3. Tambah pesanan")
        print("4. Hapus pelanggan")
        print("5. Hitung harga pesanan")
        print("6. Lihat Orderan")
        print("0. Keluar")
        selector = int(input("Masukkan pilihan: "))
        if selector == 1:
            restaurant.show_tables()
        elif selector == 2:
            table_number = int(input("Nomor Meja: "))
            customer = input("Nama Pelanggan: ")
            restaurant.add_customer(table_number, customer)
        elif selector == 3:
            table_number = int(input("Nomor Meja: "))
            restaurant.show_menu()
            menu_id = int(input("ID Menu: "))
            restaurant.add_order(table_number, menu_id)
        elif selector == 4:
            table_number = int(input("Nomor Meja: "))
            restaurant.remove_customer(table_number)
        elif selector == 5:
            table_number = int(input("Nomor Meja: "))
            restaurant.bill(table_number)
        elif selector == 6:
            table_number = int(input("Nomor Meja: "))
            restaurant.show_order(table_number)
        elif selector == 0:
            print(f"Terima kasih telah mampir di Restoran {restaurant.name}")
        else:
            print("Pilihan tidak valid")

main()
