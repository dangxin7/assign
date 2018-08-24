<li>
                        <a href="{dede:field name='typeurl'/}" style="color: #000;" >{dede:field name='typename'/}</a>
                        <ul>
                            <?php foreach ($vo['subInfo'] as $ko): ?>
                            <li><a href="{:U($ko['url'],$ko['urlParam'])}" style="color: #969696;">{$ko['title']}</a></li>
                            <?php endforeach ?>
                        </ul>
                    </li>