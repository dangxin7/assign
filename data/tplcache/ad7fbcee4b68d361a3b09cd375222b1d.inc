<li>
                        <a href="{dede:field name='typeurl'/}" style="color: #000;" >{dede:field name='typename'/}</a>
                        <ul>
                            {dede:channel type='son' noself='true'} 
                            <li><a href="[field:typelink/]" style="color: #000">[field:typename/]</a></li>
                            {/dede:channel} 
                        </ul>
                    </li>