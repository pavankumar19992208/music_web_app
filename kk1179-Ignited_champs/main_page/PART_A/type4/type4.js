function clickEvent(first,last){
    if(first.value.length){
        document.getElementById(last).focus();
    }
}

   var list1 = [];
    var list2 = [];
    var list3 = [];
    var list4 = [];

    var list5 = [];
    var list6 = [];
    var list7 = [];
    var list8 = [];
    var list9 = [];
    var list10 = [];
    var list11 = [];
    var list12 = [];
    var list13 = [];


    var n = 1;
    var x = 0;
    function next3() {
        document.getElementById('div6').style.display = "block";
        document.getElementById('div4').style.display = "block";


        var AddRown = document.getElementById('show');
        var NewRow = AddRown.insertRow(n);

        list1[x] = document.getElementById("Aname").value;
        list2[x] = document.getElementById("Atype").value;
        list3[x] = document.getElementById("email").value;
        list4[x] = document.getElementById("Mno").value;

        var cel1 = NewRow.insertCell(0);
        var cel2 = NewRow.insertCell(1);
        var cel3 = NewRow.insertCell(2);
        var cel4 = NewRow.insertCell(3);

        cel1.innerHTML = list1[x];
        cel2.innerHTML = list2[x];
        cel3.innerHTML = list3[x];
        cel4.innerHTML = list4[x];

        var AddRown = document.getElementById('show1');
        var NewRow = AddRown.insertRow(n);

        list5[x] = document.getElementById("Sfile").value;
        list6[x] = document.getElementById("giname").value;
        list7[x] = document.getElementById("class").value;
        list8[x] = document.getElementById("origin").value;

        var cel1 = NewRow.insertCell(0);
        var cel2 = NewRow.insertCell(1);
        var cel3 = NewRow.insertCell(2);
        var cel4 = NewRow.insertCell(3);

        cel1.innerHTML = list5[x];
        cel2.innerHTML = list6[x];
        cel3.innerHTML = list7[x];
        cel4.innerHTML = list8[x];

        var AddRown = document.getElementById('show2');
        var NewRow = AddRown.insertRow(n);

        list9[x] = document.getElementById("doc1").value;
        list10[x] = document.getElementById("doc2").value;
        list11[x] = document.getElementById("doc3").value;
        list12[x] = document.getElementById("doc4").value;

        var cel1 = NewRow.insertCell(0);
        var cel2 = NewRow.insertCell(1);
        var cel3 = NewRow.insertCell(2);
        var cel4 = NewRow.insertCell(3);

        cel1.innerHTML = list9[x];
        cel2.innerHTML = list10[x];
        cel3.innerHTML = list11[x];
        cel4.innerHTML = list12[x];

        var AddRown = document.getElementById('show3');
        var NewRow = AddRown.insertRow(n);

        list13[x] = document.getElementById("logo").value;

        var cel1 = NewRow.insertCell(0);

        cel1.innerHTML = list13[x];


        n++;
        x++;
        document.getElementById('div1').style.display = "none";
        document.getElementById('div2').style.display = "none";
        document.getElementById('div3').style.display = "none";
        document.getElementById('div5').style.display = "none";
        document.getElementById('div8').style.display = "none";
    }
/*
                        function next2() {
                            document.getElementById('div1').style.display = "none";
                            document.getElementById('div2').style.display = "none";
                            document.getElementById('div3').style.display = "block";
                            document.getElementById('div4').style.display = "none";
                        }
                        function prev2() {
                            document.getElementById('div1').style.display = "block";
                            document.getElementById('div2').style.display = "none";
                            document.getElementById('div3').style.display = "none";
                            document.getElementById('div4').style.display = "none";
                        }
                        function next3() {
                            document.getElementById('div1').style.display = "none";
                            document.getElementById('div2').style.display = "none";
                            document.getElementById('div3').style.display = "none";
                            document.getElementById('div4').style.display = "block";
                            document.getElementById('div5').style.display = "none";
                            let form = document.getElementById("form1");
                    
                            let table = document.getElementById('data');
                            form.addEventListener("submit", (e) => {
                                e.preventDefault();
                                submit();
                            })
                    
                    
                            const submit = () => {
                                let Aname = document.getElementById("Aname").value;
                                let Atype = document.getElementById("Atype").value;
                                let Mno = document.getElementById("Mno").value;
                    
                    
                                let newArray = [Aname,Atype,Mno];
                                newArray.forEach((item) => {
                                    var li = document.createElement("li");
                                    var text = document.createTextNode(item);
                                    li.appendChild(text);
                                    table.appendChild(li);
                                })
                                form.reset();
                            }
                        }*/
function next2(){
        document.getElementById('div1').style.display = "none";
        document.getElementById('div2').style.display = "none";
        document.getElementById('div3').style.display = "none";
        document.getElementById('div5').style.display = "none";
        document.getElementById('div8').style.display = "block";
}

  