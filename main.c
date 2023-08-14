#include <gtk/gtk.h>
#include <string.h>
GtkWidget *one;
GtkWidget *two;
GtkWidget *three;
GtkWidget *four;
GtkWidget *five;
GtkWidget *six;
GtkWidget *seven;
GtkWidget *eight;
GtkWidget *nine;
GtkWidget *plus;
GtkWidget *minus;
GtkWidget *divide;
GtkWidget *mul;
GtkWidget *equal;
GtkWidget *clear;
GtkTextBuffer *buffer;

int infix_postfix(gchar*);
int pre(char );
int postfix_eval(char [],int );
int main(int argc, char *argv[])
{
	GtkBuilder      *builder;
    GtkWidget       *window;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "calc.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
    gtk_builder_connect_signals(builder, NULL);
	
	one=GTK_WIDGET(gtk_builder_get_object(builder,"one"));
	two=GTK_WIDGET(gtk_builder_get_object(builder,"two"));
	three=GTK_WIDGET(gtk_builder_get_object(builder,"three"));
	four=GTK_WIDGET(gtk_builder_get_object(builder,"four"));
	five=GTK_WIDGET(gtk_builder_get_object(builder,"five"));
	six=GTK_WIDGET(gtk_builder_get_object(builder,"six"));
	seven=GTK_WIDGET(gtk_builder_get_object(builder,"seven"));
	eight=GTK_WIDGET(gtk_builder_get_object(builder,"eight"));
	nine=GTK_WIDGET(gtk_builder_get_object(builder,"nine"));
	plus=GTK_WIDGET(gtk_builder_get_object(builder,"plus"));
	minus=GTK_WIDGET(gtk_builder_get_object(builder,"minus"));
	divide=GTK_WIDGET(gtk_builder_get_object(builder,"div"));
	mul=GTK_WIDGET(gtk_builder_get_object(builder,"mul"));
	equal=GTK_WIDGET(gtk_builder_get_object(builder,"equal"));
	clear=GTK_WIDGET(gtk_builder_get_object(builder,"clear"));
    
	g_object_unref(builder);

    gtk_widget_show(window);
    gtk_main();

    return 0;
}

void on_window_main_destroy()
{
    gtk_main_quit();
}
void on_clear_clicked(GtkButton *button,GtkWidget *textbox)
{

	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer(GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,"",-1);

}
void on_one_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"1"),-1);


	
}
void on_two_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"2"),-1);

}
void on_three_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"3"),-1);

}
void on_four_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"4"),-1);

}
void on_five_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"5"),-1);

}
void on_six_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"6"),-1);

}
void on_seven_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"7"),-1);

}
void on_eight_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"8"),-1);

}
void on_nine_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"9"),-1);

}
void on_plus_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"+"),-1);

}
void on_minus_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"-"),-1);

}
void on_div_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"/"),-1);

}
void on_mul_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,strcat(text,"*"),-1);

}
void on_equal_clicked(GtkButton *button,GtkWidget *textbox)
{
	GtkTextIter start,end;
	buffer=gtk_text_view_get_buffer((GtkTextView*)textbox);
	gchar *text;
	gtk_text_buffer_get_bounds(buffer,&start,&end);
	text=gtk_text_buffer_get_text(buffer,&start,&end,FALSE);

	int res=infix_postfix(text);
	sprintf(text,"%d",res);

	buffer=gtk_text_view_get_buffer (GTK_TEXT_VIEW (textbox));
	gtk_text_buffer_set_text(buffer,text,-1);

}
int infix_postfix(gchar* text)
{
	char opr[256];
	char opd[256];
	int i,a,b,j=-1,k=-1;

	for(i=0;i<strlen(text);i++)
	{
		if(j==-1)
		{
			j++;
			opd[j]=text[i];
		}
		else if(k==-1)
		{
			k++;
			opr[k]=text[i];

		}
		else if(text[i]>=48 && text[i]<=57)
		{
			j++;
			opd[j]=text[i];
		}
		else
		{
			a=pre(opr[k]);
			b=pre(text[i]);
			while(a>=b)
			{
				j++;
				opd[j]=opr[k];
				k--;

				if(k==-1)
					break;
				a=pre(opr[k]);
			}
			k++;
			opr[k]=text[i];
		}
	}

	while(k>=-1)
	{
		j++;
		opd[j]=opr[k];
		k--;
	
	}
	for(i=0;i<j;i++)
	{
		printf("%c",opd[i]);
	}
	printf("\n");

	return (postfix_eval(opd,j));
}

int postfix_eval(char opd[],int j)
{
	int stack[256];
	int i,k=-1,a,b;
	for(i=0;i<j;i++)
	{
		if(opd[i]>=48 && opd[i]<=57)
		{
			k++;
			stack[k]=opd[i]-48;

		}
		else
		{
			if(opd[i]=='*')
			{
				b=stack[k];
				k--;
				a=stack[k];
				stack[k]=a*b;

			}
			else if(opd[i]=='/')
			{
				
				b=stack[k];
				k--;
				a=stack[k];
				stack[k]=a/b;
			}
			else if(opd[i]=='+')
			{
				b=stack[k];
				k--;
				a=stack[k];
				stack[k]=a+b;
			}
			else if(opd[i]=='-')
			{
				 
				b=stack[k];
				k--;
				a=stack[k];
				stack[k]=a-b;
			}
		}
	}
	return stack[k];
}

int pre(char s)
{

	switch(s)
	{
		case '*':
		case '/':
			return 1;
		case '+':
		case '-': 
            return 0;
	}


}
