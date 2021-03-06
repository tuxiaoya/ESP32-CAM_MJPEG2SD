const char* index_ov2640_html = R"~(
<!doctype html>                             
<html>
    <head>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width,initial-scale=1">
        <title>{hostName}</title>
        <style>
            body {
                font-family: Arial,Helvetica,sans-serif;
                background: #181818;
                color: #EFEFEF;
                font-size: 16px
            }

            h2 {
                font-size: 18px
            }

            section.main {
                display: flex
            }
            
            nav#sidetoolbar {
              display: flex;
              flex-wrap: nowrap;
              justify-content: flex-end;
            }
            
            #menu,section.main {
                flex-direction: column
            }

            nav.menu {
              display: grid;
              flex-direction: column;
              flex-wrap: nowrap;
              min-width: 350px;
              background: #363636;
              padding: 8px;
              border-radius: 4px;
              margin-top: -10px;
              margin-right: 10px;
              margin-bottom: 13px;
            }
            
            #content {
                display: flex;
                flex-wrap: wrap;
                align-items: stretch
            }

            figure {
                padding: 0px;
                margin: 0;
                -webkit-margin-before: 0;
                margin-block-start: 0;
                -webkit-margin-after: 0;
                margin-block-end: 0;
                -webkit-margin-start: 0;
                margin-inline-start: 0;
                -webkit-margin-end: 0;
                margin-inline-end: 0
            }

            figure img {
                display: block;
                width: 100%;
                height: auto;
                border-radius: 4px;
                margin-top: 8px;
            }

            @media (min-width: 800px) and (orientation:landscape) {
                #content {
                    display:flex;
                    flex-wrap: nowrap;
                    align-items: stretch
                }

                figure img {
                    display: block;
                    max-width: 100%;
                    max-height: calc(100vh - 40px);
                    width: auto;
                    height: auto
                }

                figure {
                    padding: 0 0 0 0px;
                    margin: 0;
                    -webkit-margin-before: 0;
                    margin-block-start: 0;
                    -webkit-margin-after: 0;
                    margin-block-end: 0;
                    -webkit-margin-start: 0;
                    margin-inline-start: 0;
                    -webkit-margin-end: 0;
                    margin-inline-end: 0
                }
            }

            section#buttons {
                display: flex;
                flex-wrap: nowrap;
                justify-content: space-between;
            }

            #nav-toggle {
                cursor: pointer;
                display: block
            }

            #nav-toggle-cb {
                outline: 0;
                opacity: 0;
                width: 0;
                height: 0
            }

            #nav-toggle-cb:checked+#menu {
                display: flex
            }

            .input-group {
                position: relative;
                display: flex;
                flex-wrap: nowrap;
                line-height: 22px;
                margin: 5px 0
            }

            .input-group>label {
                display: inline-block;
                padding-right: 10px;
                min-width: 47%
            }

            .input-group input,.input-group select {
                flex-grow: 1
            }

            .range-max,.range-min {
                display: inline-block;
                padding: 0 5px
            }

            button {
                display: block;
                margin: 5px;
                padding: 0 12px;
                border: 0;
                line-height: 28px;
                cursor: pointer;
                color: #fff;
                background: #ff3034;
                border-radius: 5px;
                font-size: 16px;
                outline: 0
            }

            button:hover {
                background: #ff494d
            }

            button:active {
                background: #f21c21
            }

            button.disabled {
                cursor: default;
                background: #a0a0a0
            }

            input[type=range] {
                -webkit-appearance: none;
                width: 100%;
                height: 22px;
                background: #363636;
                cursor: pointer;
                margin: 0
            }

            input[type=range]:focus {
                outline: 0
            }

            input[type=range]::-webkit-slider-runnable-track {
                width: 100%;
                height: 2px;
                cursor: pointer;
                background: #EFEFEF;
                border-radius: 0;
                border: 0 solid #EFEFEF
            }

            input[type=range]::-webkit-slider-thumb {
                border: 1px solid rgba(0,0,30,0);
                height: 22px;
                width: 22px;
                border-radius: 50px;
                background: #ff3034;
                cursor: pointer;
                -webkit-appearance: none;
                margin-top: -11.5px
            }

            input[type=range]:focus::-webkit-slider-runnable-track {
                background: #EFEFEF
            }

            input[type=range]::-moz-range-track {
                width: 100%;
                height: 2px;
                cursor: pointer;
                background: #EFEFEF;
                border-radius: 0;
                border: 0 solid #EFEFEF
            }

            input[type=range]::-moz-range-thumb {
                border: 1px solid rgba(0,0,30,0);
                height: 22px;
                width: 22px;
                border-radius: 50px;
                background: #ff3034;
                cursor: pointer
            }

            input[type=range]::-ms-track {
                width: 100%;
                height: 2px;
                cursor: pointer;
                background: 0 0;
                border-color: transparent;
                color: transparent
            }

            input[type=range]::-ms-fill-lower {
                background: #EFEFEF;
                border: 0 solid #EFEFEF;
                border-radius: 0
            }

            input[type=range]::-ms-fill-upper {
                background: #EFEFEF;
                border: 0 solid #EFEFEF;
                border-radius: 0
            }

            input[type=range]::-ms-thumb {
                border: 1px solid rgba(0,0,30,0);
                height: 22px;
                width: 22px;
                border-radius: 50px;
                background: #ff3034;
                cursor: pointer;
                height: 2px
            }

            input[type=range]:focus::-ms-fill-lower {
                background: #EFEFEF
            }

            input[type=range]:focus::-ms-fill-upper {
                background: #363636
            }

            .switch {
                display: block;
                position: relative;
                line-height: 22px;
                font-size: 16px;
                height: 22px
            }

            .switch input {
                outline: 0;
                opacity: 0;
                width: 0;
                height: 0
            }

            .slider {
                width: 50px;
                height: 22px;
                border-radius: 22px;
                cursor: pointer;
                background-color: grey
            }

            .slider,.slider:before {
                display: inline-block;
                transition: .4s
            }

            .slider:before {
                position: relative;
                content: "";
                border-radius: 50%;
                height: 16px;
                width: 16px;
                left: 4px;
                top: 3px;
                background-color: #fff
            }

            input:checked+.slider {
                background-color: #ff3034
            }

            input:checked+.slider:before {
                -webkit-transform: translateX(26px);
                transform: translateX(26px)
            }

            select {
                border: 1px solid #363636;
                font-size: 14px;
                height: 22px;
                outline: 0;
                border-radius: 5px
            }

            .image-container {
                position: relative;
                min-width: 160px
            }

            .close {
                position: absolute;
                right: 5px;
                top: 5px;
                background: #ff3034;
                width: 16px;
                height: 16px;
                border-radius: 100px;
                color: #fff;
                text-align: center;
                line-height: 18px;
                cursor: pointer
            }

            .hidden {
                display: none
            }
            output {
              position: absolute;
              top: -32px;
              display: none;
              width: 50px;
              height: 24px;
              border: 1px solid #e2e2e2;
              background-color: #FFE4C4;
              border-radius: 3px;
              color: #777;
              font-size: .8em;
              font-weight: bold;
              line-height: 24px;
              text-align: center;
            }

            .extras {
                display: none;
            }

            input[type=range]:active + output {
              display: block;
              -webkit-transform: translateX(180px);
            }
            
            #settings-cb {
              display: none;
            }

            #settings-cb:not(:checked)+ label + div { 
              display: none; 
            }
            
            #other-cb {
              display: none;
            }
            
            #other-cb:not(:checked)+ label + div { 
              display: none; 
            }
        </style>
    </head>
    <body>
        <section class="main">
            <div id="logo">
                <section id="buttons">
                    <label for="nav-toggle-cb" id="nav-toggle" style="float:left;">&#9776;&nbsp;&nbsp;Camera Control&nbsp;&nbsp;&nbsp;&nbsp;</label>                  
                    <button id="get-still" style="float:right;">Get Still</button>
                    <button id="toggle-stream" style="float:right;">Start Stream</button>
                </section>
            </div>
            <div id="content">
                <div id="sidebar">
                    <input type="checkbox" id="nav-toggle-cb" checked="checked">
                    <nav class="menu">
                        <div class="input-group" id="framesize-group">
                            <label for="framesize">Resolution</label>
                            <select id="framesize" class="default-action">
                                <option value="10">UXGA(1600x1200)</option>
                                <option value="9">SXGA(1280x1024)</option>
                                <option value="8">XGA(1024x768)</option>
                                <option value="7">SVGA(800x600)</option>
                                <option value="6" selected="selected">VGA(640x480)</option>
                                <option value="5">CIF(400x296)</option>
                                <option value="4">QVGA(320x240)</option>
                                <option value="3">HQVGA(240x176)</option>
                                <option value="0">QQVGA(160x120)</option>
                            </select>
                        </div>
                        <div class="input-group" id="fps-group">
                            <label for="fps">FPS</label>
                            <div class="range-min">1</div>
                            <input type="range" id="fps" min="1" max="30" value="10" class="default-action">
                            <output name="rangeVal">15</output>
                            <div class="range-max">30</div>
                        </div>
                        <div class="input-group" id="minf-group">
                            <label for="minf">Min Seconds</label>
                            <div class="range-min">0</div>
                            <input type="range" id="minf" min="0" max="20" value="5" class="default-action">
                            <output name="rangeVal">5</output>
                            <div class="range-max">20</div>
                        </div>
                        <div class="input-group" id="dbg-group">
                            <label for="dbg">Verbose</label>
                            <div class="switch">
                                <input id="dbg" type="checkbox" class="default-action">
                                <label class="slider" for="dbg"></label>
                            </div>
                        </div>
                        <div class="input-group" id="sfiles-group" style="display: grid;">
                          <label for="sfiles">Select folder / file</label>                          
                          <select id="sfile" style="font-size: 11px;">
                            <option value="None" selected="selected">-- Select --</option>
                            <option value="/">Get Folders</option>
                          </select>
                        </div>
                        <section id="buttons"><br>
                          <label for="avi">AVI</label>
                          <div class="switch">
                            <input id="avi" type="checkbox" class="default-action">
                            <label class="slider" for="avi"></label>
                          </div>
                          <button id="upload" style="float:left; " value="1">FTP Upload</button>
                          <button id="uploadrem" class="extras" style="float:left; " value="1">Ftp Upload Delete</button>
                          <button id="delete" style="float:right; " value="">Delete</button>
                        </section><br>
                        <div class="input-group" id="quality-group">
                            <label for="quality">Quality</label>
                            <div class="range-min">10</div>
                            <input type="range" id="quality" min="10" max="63" value="10" class="default-action">
                            <output name="rangeVal">10</output>
                            <div class="range-max">63</div>
                        </div>
                        <div class="input-group" id="record-group">
                            <label for="record">Save Capture</label>
                            <div class="switch">
                                <input id="record" type="checkbox" class="default-action">
                                <label class="slider" for="record"></label>
                            </div>
                        </div> 
                        <div class="input-group" id="isrecord">
                            <label for="isrecord">Recording? </label>
                            &nbsp;<div id="isrecord" class="default-action displayonly">&nbsp;</div>
                        </div>
                        <div class="input-group" id="motion-group">
                            <label for="motion">Motion Sensitivity</label>
                            <div class="range-min">1</div>
                            <input type="range" id="motion" min="1" max="10" value="7" class="default-action">
                            <output name="rangeVal">7</output>
                            <div class="range-max">10</div>
                        </div>                                                                
                        <div class="input-group" id="lamp-group">
                            <label for="lamp">Lamp</label>
                            <div class="switch">
                                <input id="lamp" type="checkbox" class="default-action">
                                <label class="slider" for="lamp"></label>
                            </div>
                         </div>
                        <div class="input-group" id="lswitch-group">
                            <label for="lswitch">Night Switch</label>
                            <div class="range-min">0</div>
                            <input type="range" id="lswitch" min="0" max="100" value="10" class="default-action">
                            <output name="rangeVal">10</output>
                            <div class="range-max">100</div>
                        </div>
                        <div class="input-group" id="llevel-group">
                            <label for="llevel">Ambient Light</label>
                            &nbsp;<div id="llevel" class="default-action displayonly">&nbsp;</div>
                        </div>
                        <div class="input-group" id="night-group">
                            <label for="night">Night Time</label>
                            &nbsp;<div id="night" class="default-action displayonly" name="textonly">&nbsp;</div>
                        </div>                             
                        <div class="input-group extras" id="atemp-group">
                            <label for="atemp">Camera Temp</label>
                            &nbsp;<div id="atemp" class="default-action displayonly" name="textonly">&nbsp;</div>
                        </div>  
                        <div class="input-group" id="dbgMotion-group">
                            <label for="dbgMotion">Show Motion</label>
                            <div class="switch">
                                <input id="dbgMotion" type="checkbox" class="default-action">
                                <label class="slider" for="dbgMotion"></label>
                            </div>
                        </div>
                     </nav>
                     <nav class="menu">                                                                
                        <input type='checkbox' id="settings-cb">
                        <label for="settings-cb" style="float:left;">&#9776;&nbsp;&nbsp;Camera Settings&nbsp;&nbsp;</label>
                        <div>
                          <div class="input-group" id="brightness-group">
                              <label for="brightness">Brightness</label>
                              <div class="range-min">-2</div>
                              <input type="range" id="brightness" min="-2" max="2" value="0" class="default-action">
                              <output name="rangeVal">0</output>
                              <div class="range-max">2</div>
                          </div>
                          <div class="input-group" id="contrast-group">
                              <label for="contrast">Contrast</label>
                              <div class="range-min">-2</div>
                              <input type="range" id="contrast" min="-2" max="2" value="0" class="default-action">
                              <output name="rangeVal">0</output>
                              <div class="range-max">2</div>
                          </div>
                          <div class="input-group" id="saturation-group">
                              <label for="saturation">Saturation</label>
                              <div class="range-min">-2</div>
                              <input type="range" id="saturation" min="-2" max="2" value="0" class="default-action">
                              <output name="rangeVal">0</output>
                              <div class="range-max">2</div>
                          </div>
                          <div class="input-group" id="special_effect-group">
                              <label for="special_effect">Special Effect</label>
                              <select id="special_effect" class="default-action">
                                  <option value="0" selected="selected">No Effect</option>
                                  <option value="1">Negative</option>
                                  <option value="2">Grayscale</option>
                                  <option value="3">Red Tint</option>
                                  <option value="4">Green Tint</option>
                                  <option value="5">Blue Tint</option>
                                  <option value="6">Sepia</option>
                              </select>
                          </div>
                          <div class="input-group" id="awb-group">
                              <label for="awb">AWB</label>
                              <div class="switch">
                                  <input id="awb" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="awb"></label>
                              </div>
                          </div>
                          <div class="input-group" id="awb_gain-group">
                              <label for="awb_gain">AWB Gain</label>
                              <div class="switch">
                                  <input id="awb_gain" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="awb_gain"></label>
                              </div>
                          </div>
                          <div class="input-group" id="wb_mode-group">
                              <label for="wb_mode">WB Mode</label>
                              <select id="wb_mode" class="default-action">
                                  <option value="0" selected="selected">Auto</option>
                                  <option value="1">Sunny</option>
                                  <option value="2">Cloudy</option>
                                  <option value="3">Office</option>
                                  <option value="4">Home</option>
                              </select>
                          </div>
                          <div class="input-group" id="aec-group">
                              <label for="aec">AEC SENSOR</label>
                              <div class="switch">
                                  <input id="aec" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="aec"></label>
                              </div>
                          </div>
                          <div class="input-group" id="aec2-group">
                              <label for="aec2">AEC DSP</label>
                              <div class="switch">
                                  <input id="aec2" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="aec2"></label>
                              </div>
                          </div>
                          <div class="input-group" id="ae_level-group">
                              <label for="ae_level">AE Level</label>
                              <div class="range-min">-2</div>
                              <input type="range" id="ae_level" min="-2" max="2" value="0" class="default-action">
                              <output name="rangeVal">0</output>
                              <div class="range-max">2</div>
                          </div>
                          <div class="input-group" id="aec_value-group">
                              <label for="aec_value">Exposure</label>
                              <div class="range-min">0</div>
                              <input type="range" id="aec_value" min="0" max="1200" value="204" class="default-action">
                              <output name="rangeVal">204</output>
                              <div class="range-max">1200</div>
                          </div>
                          <div class="input-group" id="agc-group">
                              <label for="agc">AGC</label>
                              <div class="switch">
                                  <input id="agc" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="agc"></label>
                              </div>
                          </div>
                          <div class="input-group hidden" id="agc_gain-group">
                              <label for="agc_gain">Gain</label>
                              <div class="range-min">1x</div>
                              <input type="range" id="agc_gain" min="0" max="30" value="5" class="default-action">
                              <output name="rangeVal">5</output>
                              <div class="range-max">31x</div>
                          </div>
                          <div class="input-group" id="gainceiling-group">
                              <label for="gainceiling">Gain Ceiling</label>
                              <div class="range-min">2x</div>
                              <input type="range" id="gainceiling" min="0" max="6" value="0" class="default-action">
                              <output name="rangeVal">0</output>
                              <div class="range-max">128x</div>
                          </div>
                          <div class="input-group" id="bpc-group">
                              <label for="bpc">BPC</label>
                              <div class="switch">
                                  <input id="bpc" type="checkbox" class="default-action">
                                  <label class="slider" for="bpc"></label>
                              </div>
                          </div>
                          <div class="input-group" id="wpc-group">
                              <label for="wpc">WPC</label>
                              <div class="switch">
                                  <input id="wpc" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="wpc"></label>
                              </div>
                          </div>
                          <div class="input-group" id="raw_gma-group">
                              <label for="raw_gma">Raw GMA</label>
                              <div class="switch">
                                  <input id="raw_gma" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="raw_gma"></label>
                              </div>
                          </div>
                          <div class="input-group" id="lenc-group">
                              <label for="lenc">Lens Correction</label>
                              <div class="switch">
                                  <input id="lenc" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="lenc"></label>
                              </div>
                          </div>
                          <div class="input-group" id="hmirror-group">
                              <label for="hmirror">H-Mirror</label>
                              <div class="switch">
                                  <input id="hmirror" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="hmirror"></label>
                              </div>
                          </div>
                          <div class="input-group" id="vflip-group">
                              <label for="vflip">V-Flip</label>
                              <div class="switch">
                                  <input id="vflip" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="vflip"></label>
                              </div>
                          </div>
                          <div class="input-group" id="dcw-group">
                              <label for="dcw">DCW (Downsize EN)</label>
                              <div class="switch">
                                  <input id="dcw" type="checkbox" class="default-action" checked="checked">
                                  <label class="slider" for="dcw"></label>
                              </div>
                          </div>
                          <div class="input-group" id="colorbar-group">
                              <label for="colorbar">Color Bar</label>
                              <div class="switch">
                                  <input id="colorbar" type="checkbox" class="default-action">
                                  <label class="slider" for="colorbar"></label>
                              </div>
                          </div>                                                
                        </div>            
                    </nav>
                    <nav class="menu">
                        <input type="checkbox" id="other-cb">
                        <label for="other-cb" style="float:left;">&#9776;&nbsp;&nbsp;Other Settings&nbsp;&nbsp;</label>
                        <div>
                          <div class="input-group" id="wifi-group">
                              <label for "hostName">Host Name</label>
                              <input id="hostName" name="hostName" length=32 placeholder="Host name" class="default-action">
                          </div>
                          <div class="input-group" id="wifi-group">
                              <label for "ST_SSID">SSID</label>
                              <input id="ST_SSID" name="ST_SSID" length=32 placeholder="Router SSID" class="default-action">
                          </div>
                          <div class="input-group" id="wifi-group">
                              <label for="ST_Pass">Password</label>
                              <input id="ST_Pass" name="ST_Pass" length=64 placeholder="Router password" class="default-action">
                          </div>
                          <br>
                          <div class="input-group" id="wifi-group">
                              <label for "ftp_server">Ftp Server</label>
                              <input id="ftp_server" name="ftp_server" length=32 placeholder="Ftp server name" class="default-action">
                          </div>
                          <div class="input-group" id="wifi-group">
                              <label for "ftp_port">Ftp port</label>
                              <input id="ftp_port" name="ftp_port" length=6 placeholder="Ftp port" class="default-action">
                          </div>
                          
                          <div class="input-group" id="wifi-group">
                              <label for="ftp_user">Ftp user name</label>
                              <input id="ftp_user" name="ftp_user" length=32 placeholder="Ftp user name" class="default-action">
                          </div>
                          <div class="input-group" id="wifi-group">
                              <label for="ftp_pass">Ftp password</label>
                              <input id="ftp_pass" name="ftp_pass" length=32 placeholder="Ftp password" class="default-action">
                          </div>
                          <div class="input-group" id="wifi-group">
                              <label for="ftp_wd">Ftp root dir</label>
                              <input id="ftp_wd" name="ftp_wd" length=64 placeholder="Ftp working directory" class="default-action">
                          </div>                          
                          <br>                                                 
                          <div>
                            <section id="buttons">
                              <button id="reboot" style="float:right;">Reboot</button>
                              <button id="save" style="float:right;">Save</button>
                              <button id="defaults" style="float:right;">Defaults</button>
                            </section>
                          </div>   
                        </div>
                   </nav>
                </div>
                <figure>
                    <div id="stream-container" class="image-container hidden">
                        <div class="close" id="close-stream">×</div>
                        <img id="stream" src="">
                    </div>
                </figure>
            </div>
        </section>
        <script src="https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js"></script>
        <script>
$('input[type="range"]').on('input', function () {

  var control = $(this),
  controlMin = control.attr('min'),
  controlMax = control.attr('max'),
  controlVal = control.val();

  var range = controlMax - controlMin;
  var position = (controlVal - controlMin) / range * 30;
  
  var output = control.next('output');
  output.
  css('left', 'calc(' + position + '%)').text(controlVal);

});

document.addEventListener('DOMContentLoaded', function (event) {
  var baseHost = document.location.origin
  var streamUrl = baseHost + ':81'

  const hide = el => {
    el.classList.add('hidden')
  }
  const show = el => {
    el.classList.remove('hidden')
  }

  const disable = el => {
    el.classList.add('disabled')
    el.disabled = true
  }

  const enable = el => {
    el.classList.remove('disabled')
    el.disabled = false
  }

  const updateValue = (el, value, updateRemote) => {
    updateRemote = updateRemote == null ? true : updateRemote
    let initialValue
    if (el.type === 'checkbox') {
      initialValue = el.checked
      value = !!value
      el.checked = value
    } else {
      if (el.classList.contains('displayonly')) {
        el.innerHTML = value       
      } else {
        initialValue = el.value
        el.value = value
      }
    }

    if (updateRemote && initialValue !== value) {
      updateConfig(el);
    } else if(!updateRemote){
      if(el.id === "aec"){
        value ? hide(exposure) : show(exposure)
      } else if(el.id === "agc"){
        if (value) {
          show(gainCeiling)
          hide(agcGain)
        } else {
          hide(gainCeiling)
          show(agcGain)
        }
      } else if(el.id === "hostName"){
        document.title = value                                                                 
      } else if(el.id === "awb_gain"){
        value ? show(wb) : hide(wb)
      }
    }
  }

  function updateConfig (el) {
    let value
    switch (el.type) {
      case 'checkbox':
        value = el.checked ? 1 : 0
        break
      case 'range':
      case 'select-one':
        value = el.value
        break
      case 'button':
      case 'submit':
        if(el.value!="1"){ //Delete folder or file, or ftp upload
          value = el.value
        }else{
          value = '1'
        }
        break
      case 'text':
        value = el.value
        break
      default:
        return
    }
    
    const query = `${baseHost}/control?var=${el.id}&val=${value}`

    fetch(query)
      .then(response => {
        console.log(`request to ${query} finished, status: ${response.status}`)
    })
  }

  document
    .querySelectorAll('.close')
    .forEach(el => {
      el.onclick = () => {
        hide(el.parentNode)
      }
    })

  // read initial values
  fetch(`${baseHost}/status`)
    .then(function (response) {
      return response.json()
    })
    .then(function (state) {
      document
        .querySelectorAll('.default-action')
        .forEach(el => {
          updateValue(el, state[el.id], false)
        })
    })

  const view = document.getElementById('stream')
  const viewContainer = document.getElementById('stream-container')
  const stillButton = document.getElementById('get-still')
  const streamButton = document.getElementById('toggle-stream')
  const closeButton = document.getElementById('close-stream')  
  const uploadButton = document.getElementById('upload')    
  const deleteButton = document.getElementById('delete') 
  const rebootButton = document.getElementById('reboot')
  const saveButton = document.getElementById('save')
  const defaultsButton = document.getElementById('defaults')
  
  uploadButton.onclick = () => {
    updateConfig(uploadButton);
  }
  
  deleteButton.onclick = () => {
    var deleteBt = $('#delete');
    if(!confirm("Are you sure you want to delete " + deleteBt.val() + " from the SD card?"))
      return false;
      
    updateConfig(deleteButton);
    
    var sid = $('#sfile');
    sid.find('option:not(:first)').remove(); // remove all except first option
    sid.append('<option value="/">Get Folders</option>');    
  }

  rebootButton.onclick = () => {
    stopStream();
    window.stop();
    $.ajax({
      url: baseHost + '/control',
      data: {
        "var": "reset",
        "val": "1"
      }
    })
  }
 
 saveButton.onclick = () => {
    stopStream();
    window.stop();
    $.ajax({
      url: baseHost + '/control',
      data: {
        "var": "save",
        "val": "1"
      }
    })
  }
  
 defaultsButton.onclick = () => {
    stopStream();
    window.stop();
    $.ajax({
      url: baseHost + '/control',
      data: {
        "var": "defaults",
        "val": "1"
      }
    })
  }
  const stopStream = () => {
    window.stop();
    streamButton.innerHTML = 'Start Stream'
    $.ajax({
      url: baseHost + '/control',
      data: {
        "var": "stopStream",
        "val": "1"
      }
    })
  }

  const startStream = () => {
    view.src = `${streamUrl}/stream`
    show(viewContainer)
    streamButton.innerHTML = 'Stop Stream'
  }

  // Attach actions to buttons
  stillButton.onclick = () => {
    stopStream()
    view.src = `${baseHost}/capture?_cb=${Date.now()}`
    show(viewContainer)
  }

  closeButton.onclick = () => {
    stopStream()
    hide(viewContainer)
  }

  streamButton.onclick = () => {
    const streamEnabled = streamButton.innerHTML === 'Stop Stream'
    if (streamEnabled) {
      stopStream()
    } else {
      startStream()
    }
  }
  
  // Attach default on change action
  document
    .querySelectorAll('.default-action')
    .forEach(el => {
      el.onchange = () => updateConfig(el)
    })

  // Custom actions
  // Gain
  const agc = document.getElementById('agc')
  const agcGain = document.getElementById('agc_gain-group')
  const gainCeiling = document.getElementById('gainceiling-group')
  agc.onchange = () => {
    updateConfig(agc)
    if (agc.checked) {
      show(gainCeiling)
      hide(agcGain)
    } else {
      hide(gainCeiling)
      show(agcGain)
    }
  }

  // Exposure
  const aec = document.getElementById('aec')
  const exposure = document.getElementById('aec_value-group')
  aec.onchange = () => {
    updateConfig(aec)
    aec.checked ? hide(exposure) : show(exposure)
  }

  // AWB
  const awb = document.getElementById('awb_gain')
  const wb = document.getElementById('wb_mode-group')
  awb.onchange = () => {
    updateConfig(awb)
    awb.checked ? show(wb) : hide(wb)
  }

  // framesize
  const framesize = document.getElementById('framesize')
  framesize.onchange = () => {
    updateConfig(framesize)
    updateFPS()
  }

  function updateFPS() {
    // update default FPS to match selected framesize 
    $.ajax({
      url: baseHost + '/control',
      data: {
        "var": "updateFPS",
        "val": $('#framesize').val()
      }, 
      success: function(response) {
        // update FPS
        $.each(response, function(key, value){
           $('#'+key).val(value); // fps
        });
      }
    }); 
  }

  // folder / file option list
  const sfile = document.getElementById('sfile');
  sfile.onchange = () => {
    // build option list from json
    var sid = $('#sfile');
    var selection = sid.val();
    document.getElementById('delete').value = selection; //Store file path for delete
    document.getElementById('upload').value = selection; //Store file path for ftp upload
    sid.find('option:not(:first)').remove(); // remove all except first option
    var listItems = '';
    $.ajax({
      url: baseHost + '/control',
      data: {
        "var": "sfile",
        "val": selection
      },   
      success: function(response) {
        // create new option list from json
        $.each(response, function(key, value){
          listItems += '<option value="' + key + '">' + value + '</option>';
        });
        sid.append(listItems);
      }
    }); 
  }
});
        </script>
    </body>
</html>
)~";
