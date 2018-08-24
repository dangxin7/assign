<li>
                <a href="{dede:field name='typeurl'/}" style="color: #000;" ><b>{dede:field name='typename'/}</b></a>
                <ul>
                    {dede:channel type='son' noself='true'} 
                    <li><a href="[field:typelink/]" style="color: #000">[field:typename/]</a></li>
                    {/dede:channel} 
                </ul>
            </li>