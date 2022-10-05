from tkinter import*
win=Tk()
win.title("PAVAN CALCI")
#photo = PhotoImage(file = "c:/TURBOC/Daco_5888742.png")
#win.iconphoto(False, photo)
#820080bg=PhotoImage(file="c:/turboc/FZWjKc.png")
l=Label(win,bg="#820080")
l.place(x=0,y=0,relwidth=1,relheight=1)
win.resizable(0,0)
#win.geometry('400x500')
def click(num):
    current=e.get()
    e.delete(0,END)
    e.insert(0,current+str(num))
def click0():
    e.delete(0,END)
def click1():
    return
def click2():
    global f_num
    f_num=e.get()
    e.delete(0,END)
    global x
    x=2
def click3():
    global f_num
    f_num=e.get()
    e.delete(0,END)
    global x
    x=3
def click4():
    global f_num
    f_num=e.get()
    e.delete(0,END)
    global x
    x=4
def click5():
    global f_num
    f_num=e.get()
    e.delete(0,END)
    global x
    x=5
def click6():
    win.destroy()
def click7():
    s_num=e.get()
    e.delete(0,END)
    if(x==2):
        e.insert(0,float(f_num)+float(s_num))
    elif(x==4):
        e.insert(0,float(f_num)*float(s_num))
    elif(x==3):
        e.insert(0,float(f_num)-float(s_num))
    elif(x==5):
        e.insert(0,float(f_num)/float(s_num))
    elif(x==6):
        e.insert(0,float(f_num)**float(s_num))
def click8():
    global f_num
    f_num=e.get()
    e.delete(0,END)
    global x
    x=6
        
e=Entry(win,width=16,borderwidth=5,font=("Helvetica",18),bg="pink")
e.grid(row=0,column=0,columnspan=4,padx=10,pady=10)
e.config(highlightbackground = "#820080", highlightcolor= "#820080")

b_1=Button(win,text="1",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(1)).grid(column=0,row=1)
b_6=Button(win,text="2",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(2)).grid(column=1,row=1)
b_11=Button(win,text="3",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(3)).grid(column=2,row=1)
b_16=Button(win,text="4",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(4)).grid(column=0,row=2)
b_2=Button(win,text="5",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(5)).grid(column=1,row=2)
b_7=Button(win,text="6",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(6)).grid(column=2,row=2)
b_12=Button(win,text="7",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(7)).grid(column=0,row=3)
b_17=Button(win,text="8",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(8)).grid(column=1,row=3)
b_3=Button(win,text="9",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(9)).grid(column=2,row=3)
b_8=Button(win,text="0",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(0)).grid(column=1,row=4)
b_13=Button(win,text="00",padx=11,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click("00")).grid(column=0,row=4)
b_18=Button(win,text="+",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=click2).grid(column=3,row=3)
b_4=Button(win,text="-",padx=16,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=click3).grid(column=3,row=4)
b_9=Button(win,text="x",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=click4).grid(column=2,row=5)
b_14=Button(win,text="/",padx=16,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=click5).grid(column=1,row=5)
b_19=Button(win,text="#",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=click6).grid(column=3,row=2)
b_1=Button(win,text="=",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=click7).grid(column=3,row=5)
b_6=Button(win,text="AC",padx=9,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=click0).grid(column=3,row=1)
b_11=Button(win,text=".",padx=17,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=lambda:click(".")).grid(column=2,row=4)
b_15=Button(win,text="^",padx=15,pady=10,font=("Helvetica",16,"bold"),fg="#ffb6c1",borderwidth=0,bg="#820080",command=click8).grid(column=0,row=5)
