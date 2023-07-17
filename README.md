# ims

inventory management system ,which can be used by the shop-owners to manage their inventory/stocks.

The program has two main modes- (i) manage-inventory, (ii) and order.
(i) In the manage-inventory mode, shop owners can add new products to the inventory, remove existing products, and update the quantity of products.

1. Start by including the necessary header files:like iostream for input/output, and so on.

2. Define a structure -`Product` with three variables: `productname`, productquantity`, and price,

3. Define a class - `InventorymanagementSystem`mode which handle the inventory and order managemen
   InventorymanagementSystem
   In the "" mode, shop owners can add new products to the inventory,
   remove existing products, and update the quantity of products.

   addproduct`: Allow to add a new product to the inventory.
   removeproduct`: Allow to removing a product from the inventory.
   updatequantity`: Allow to updating the quantity of a product in the inventory.
   manageinventory`: Manages the inventory by providing options to add, remove, or update products.
   createOrder`: Creates an order by selecting products from the inventory and generating a summary.

In the "order" mode, shop owners can create orders by selecting products from the inventory.
The program displays the available products ,and prompts the user to add products to the order by specifying the product name and quantity.
It checks if the requested quantity is available in the inventory and adds the selected products to the order.
The program then generates an order summary, calculates the total amount, and provides the option to generate a bill. If a bill is generated, it saves the order details and updates the inventory by reducing the quantities of the ordered products.
