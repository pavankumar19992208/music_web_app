function subm1(){
    const adate = document.getElementById('applieddate').value;
    const aname = document.getElementById('applieddate').value;
    const gname = document.getElementById('applieddate').value;

    localStorage.setItem("ADATE",adate);
    localStorage.setItem("ANAME",aname);
    localStorage.setItem("GNAME",gname);

    return;
}