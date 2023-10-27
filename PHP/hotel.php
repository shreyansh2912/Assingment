<?php
if (isset($_REQUEST['submit'])) 
{
    print_r($_REQUEST);
}

?>

<div class="hotel">
    <form action="" method="post">
        <h1 class="hotel" style="margin-top: 100px;">Welcome To Taj Hotels</h1>

        <h3 class="hotel">Type of Booking
            <select class="theme" name="type" id="" required>
                <option value="">------</option>
                <option value="full">Full day</option>
                <option value="half">Half day</option>
            </select>
            <button type="submit" style="margin-left: 10px;" name="submit">submit</button>
        </h3>
        <?php 
        if ($_REQUEST['type'] == "full")
        {
           echo "<h3>Check in date";
           echo   "<input class='theme' type='date'>";
               echo " <br>";
               echo "Check Out date";
               echo" <input class='theme' type='date'>";
            "</h3>";
        }
        elseif($_REQUEST['type'] == 'half')
        {
          echo  " <h3 class='hotel'>Timing;";
          echo  "<select class='theme' name='type' id='' required>";
          echo "<option value=''>------</option>";
          echo "<option value='full'>Morning</option>";
          echo ' <option value="half">Evening</option>';
          echo '</select>';
          echo' <button type="submit" style="margin-left: 10px;" name="submit">submit</button>';
          echo '</h3>';
          echo "<pre>";
          echo "<h4>NOTE
    Moring : 8AM to 6PM
    Evening :7PM to 7AM
                </h4>";
          echo "</pre>";
        }
       ?>

    </form>
</div>


<style>
    .hotel {
        text-align: center;
    }

    .theme {
        margin-left: 20px;
        width: 100px;
        height: 20px;
        font-size: medium;
    }
</style>