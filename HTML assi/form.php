<?php 

echo"<pre>";
print_r($_REQUEST);
echo"</pre>";
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="form.css" type="text/css">
    <title>Document</title>
</head>
<body>
    <div class="container" style=" background-color: rgb(78, 175, 86); width: 900px; height: 600px;margin-top: 100px;">
    <div class="container1" style="height: 500px; ">
        <form action="" method="get">
            <p style="font-size: larger;" > Step 1: Your Details</p>
            <class="content">
                <div class="input-box">
                    <label for="fname" style="margin-right: 92px; ">Name</label>
                    <input type="text" placeholder="First & last name"  name="Name" id="Name" style="margin-top: 10px;">
                </div>
                <div class="input-box">
                    <label for="email" style="margin-right: 95px ">Email</label>
                    <input type="text" placeholder="example@domain.com"  name="email" id="email" style="margin-top: 10px;">
                </div>  
                <div class="input-box">
                    <label for="phone"style="margin-right: 90px">Phone</label>
                    <input type="text" placeholder="Eg. +447500000000"  name="phone" id="phone" style="margin-top: 10px;">
                </div>
                     
                <P style="margin-top: 10px; font-size: larger;"> Step 2: Delivery Address</P>
                <div class="input-box">
                    <label for="Address" style="margin-right: 79px" >Address</label>
                    <input type="text" placeholder="" name="Address" id="Address" style="margin-top: 20px; height: 75px;" >
                </div>
                <div class="input-box">
                    <label for="Post Code" style="margin-right: 63px">Post Code</label>
                    <input type="text" placeholder="" name="Post code" id="Post Code"style="margin-top: 10px;">        
                </div>
                <div class="input-box">
                    <label for="Country" style="margin-right: 83px">Country</label>
                    <input type="text" placeholder="" name="Country" id="Country"style="margin-top: 10px;">
                </div>
                
                <P style="font-size: larger; margin-top: 10px ;"> Step 3: Card Detilas</P>    
            
        
                <div class="input-box">
                    <label for="Address" style="margin-right: 50px; margin-top: 5px;">Card type</label><br>
                    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/5/5e/Visa_Inc._logo.svg/1200px-Visa_Inc._logo.svg.png" alt="" height="10px" width="40px">
                    <input type="radio" name="Visa" id="1"style="margin-top: 10px;">
                    <label for="1">visa</label>
                    <img src="https://e7.pngegg.com/pngimages/868/55/png-clipart-logo-american-express-cards-bank-insurance-bank-blue-text.png" alt="" height="10px" width="40px" >
                    <input type="radio" name="Visa" id="2"style="margin-top: 20px;">
                    <label for="2">AmEx</label>
                    <img src="https://logos-world.net/wp-content/uploads/2020/09/Mastercard-Logo.png" alt="" height="10px" width="30px">
                    <input type="radio" name="visa" id="3"style="margin-top: 20px;">
                    <label for="1">Mastercard</label>   
                </div>
                <div class="input-box">
                    <label for="Card Number" style="margin-right: 42px">Card Number</label>
                    <input type="text" placeholder="" name="Card Number" id="Card Number"style="margin-top: 10px;">
                </div>
                <div class="input-box">
                    <label for="Security Code" style="margin-right: 39px">Security Code</label>
                    <input type="text" placeholder="" name="Security Code" id="Security Code"style="margin-top: 10px;">
                </div>
                <div class="input-box">
                    <label for="Name on card" style="margin-right: 39px">Name on card</label>
                    <input type="text" placeholder="Exact name as on the card" name="Security Code" id="Security Code"style="margin-top: 10px;">
                </div>
                <div class="botton-box">
                    <button style="margin: 10px; font-size: larger;margin-top: 10px;">BUY IT!</button>
                </div>
            </div>  
        </form>

    </div>
    </div>
</body>
</html>