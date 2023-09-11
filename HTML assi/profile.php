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
    <link rel="stylesheet" href="profile.css">
    <title>Document</title>
            
</head>
<body>
    <div class="container">
        <form action="" method="get">
            <div class="container1">
                <div class="input1">
                    <img src="katrina kaif.jpg" alt="Avatar" style="height:400px; margin-top: 20px  ;">  
                    <h1 style="margin-left: 50px;font-size: 25px;">katrinaKaif</h1>
                    <p style="margin-top: 0px;margin-left: 40px; border-radius: 50%;">KatrinaKaif@gmail.com</p>
                </div>
            </div>
            
            <div class="container2">
        <div class="vl">

             <div class="input2" style="margin-top: 313px;">
                 <h1 style="font-size: 150%; margin-right: 800px;">Profile Settings</h1>
             </div>
        <div class="form-row">
            <div class="input2">
                 <label for="name" style="margin-left: -150px;">Name</label><br>
                 <input type="text" placeholder="Firt Name" name="fname" id="fname" style="margin-top: 10px; height: 25px; padding: 0px 15px;">
            </div>         
            <div class="input2">
                 <label for="surname" style="margin-left: -120px;">Surname</label><br>
                 <input type="text" placeholder="SURNAME" name="Surname" id="Surname" style="margin-top: 10px;height: 25px;padding: 0px 15px;">
            </div>      
        </div>
             <div class="input2">
                 <label for="Phonenumber" style=" margin-right: 760px; margin-left: -95px;">Phonenumber</label><br>
                 <input type="text" placeholder="enter phone number" name="Phonenumber" id="Phonenumber" style="margin-top: 10px ; margin-right: 480px; width: 475px; height: 25px;padding: 0px 15px;">
             </div>       
             <div class="input2">
                 <label for="address" style="margin-right: 760px; margin-left: -140px;">Address</label><br>
                 <input type="text" placeholder="enter address" name="address" id="address" style="margin-top: 10px; margin-right: 480px; width: 475px; height: 25px;padding: 0px 15px;">
             </div>      
             <div class="input2">
                 <label for="email" style="margin-right: 760px;  margin-left: -135px;">Email ID</label><br>
                 <input type="text" placeholder="enter email id" name="email" id="email" style="margin-top: 10px;margin-right: 480px; width: 475px; height: 25px;padding: 0px 15px;">
             </div>      
             <div class="input2">
                 <label for="Education" style="margin-right: 760px; margin-left: -125px;">Education</label><br>
                 <input type="Education" placeholder="education" name="Education" id="Education" style="margin-top: 10px;margin-right: 480px; width: 475px; height: 25px;padding: 0px 15px;">
             </div>
             
        
             <div class="form-row">
             <div class="input2">
                <label for="country" style="margin-left:-140px;">country</label><br>
                <input type="text" placeholder="COUNTRY" name="country" id="country" style="margin-top: 10px;height: 25px;padding: 0px 15px;">
            </div>      
            <div class="input2">
                <label for="State" style="margin-left:-102px;">State/Region</label><br>
                <input type="text" placeholder="state" name="State" id="State" style="margin-top: 10px;height: 25px;padding: 0px 15px;">
            </div>  
        </div>
        <div class="save-btn">
                <button style=" cursor: pointer; margin-right: 550px; font-size: 30px; background-color:rgb(86, 7, 96); color: aliceblue;">Save Profile</button>
        </div>   
    </div>    
     <div class="container3">
        <div class="v2">

           <div class="form-row2">

               <div class="input4">
                   <label style=" margin-left: 100px;font-size: 20px;">Edit Experience</label>
                </div>
                <div class="input4 ">   
                    <label style=" border-style: groove;  margin-left: 430px;font-size: 20px;">Experience</label>
                </div>
            
            </div> 
                  <br><br><br><br><br>  
            <div>
                <label for="Designing" style="margin-right: 300px;">Experience in Designing</label><br><br>
                <input type="text" placeholder="experience" name="Designing" id="Designing" style="margin-right: 175px; width: 300px;height: 25px;padding: 0px 15px;"><br><br>
            
                <label for="Details" style="margin-right: 350px">Additional Details</label><br><br>
                <input type="text" placeholder="additional details" name="Details" id="Details" style="margin-right: 175px;width: 300px; height: 25px;padding: 0px 15px;">
            </div>
        </div>  
     </div>

</div>
</div>

</body>      
</form>
</html>