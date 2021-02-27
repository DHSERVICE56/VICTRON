﻿/*
 * Project : PH application
 * Author Name : Bhoj bahadur karki
 * Date : 2017-July-4th 
 * Contact : nishantkarki2013@hotmail.com
 */
using System;
using System.Globalization;

namespace PH_App
{
    public class DateTimeSubtractor
    {
        public string SubtractTwoTime(DateTime first,DateTime Now)
        {
            TimeSpan diff =  Now- first ; //DateTime.Now - DateTime.Today;
            string formatted = "";
            if (diff.Days != 0 && diff.Hours != 0)
            {
                formatted = string.Format(
                                   CultureInfo.CurrentCulture,
                                   "{0}D:{1}H:{2}M:{3}S",
                                   diff.Days,
                                   diff.Hours,
                                   diff.Minutes,               
                                   diff.Seconds);
           
            }
            else if (diff.Days == 0 && diff.Hours == 0 && diff.Minutes == 0)
            {
                formatted = diff.Seconds + " S";
            }
            else if (diff.Days == 0 && diff.Hours == 0)
            {
                formatted = diff.Minutes + "M," + diff.Seconds + "S";
            }else if(diff.Days == 0)
            {
                formatted = diff.Hours + "H," + diff.Minutes + "M," + diff.Seconds + "S";

            }
           //*/
                return formatted;
        }
    }
}
