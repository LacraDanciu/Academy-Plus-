ldapsearch -Q -LLL "(last-name=*bon*)" | grep "last-name" | wc -l | rev | cut -d " " -f 1 | rev 
